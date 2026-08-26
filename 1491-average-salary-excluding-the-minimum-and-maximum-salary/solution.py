class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort()
        sum = 0
        del salary[0]
        del salary[-1]

        for s in salary:
            sum += s
        
        return (sum/len(salary))