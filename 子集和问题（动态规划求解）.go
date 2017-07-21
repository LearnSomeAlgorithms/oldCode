package main

import (
	"fmt"
)

func main() {
	start()
}

func start() {
	datas := []int{6, 5, 1, 2, 2, 1, 3, 3, 1}
	r, res := DP(datas, 12)
	fmt.Println(r, res)
}

type NodeStruct struct {
	Exit bool
	Res  []int
}

func (n *NodeStruct) GetCopy() *NodeStruct {
	r := &NodeStruct{}
	r.Exit = n.Exit
	r.Res = make([]int, len(n.Res))
	copy(r.Res, n.Res)
	return r
}

// 动态规划求子集和问题
func DP(datas []int, sum int) (bool, []int) {
	n := len(datas)
	if n == 0 {
		return false, []int{}
	}
	if sum == 0 {
		return true, []int{}
	}

	table := make([][]*NodeStruct, sum+1)
	for i := 0; i <= sum; i++ {
		table[i] = make([]*NodeStruct, n+1)
		for j := 0; j <= n; j++ {
			table[i][j] = &NodeStruct{false, []int{}}
		}
	}

	for i := 0; i <= n; i++ {
		table[0][i].Exit = true
	}

	for i := 1; i <= sum; i++ {
		for j := 1; j <= n; j++ {
			table[i][j] = table[i][j-1].GetCopy()
			fmt.Println(i, j)
			if i >= datas[j-1] {
				temp := table[i-datas[j-1]][j-1]
				if !temp.Exit {
					continue
				}

				res := temp.GetCopy()
				res.Res = append(res.Res, datas[j-1])
				if !table[i][j].Exit {
					table[i][j] = res
					continue
				}
				if len(res.Res) < len(table[i][j].Res) {
					table[i][j] = res
				}

			}
		}
	}

	for i, v := range table {
		for j := range v {
			fmt.Printf("%v\t", table[i][j].Res)
		}
		fmt.Println()
	}

	return table[sum][n].Exit, table[sum][n].Res
}
