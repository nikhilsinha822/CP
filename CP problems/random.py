def rec_fun (par):
        if par <= 1: 
                 return 1
        
        x = 1 + rec_fun (par//2) +rec_fun(par//2)
        return x + rec_fun (par//2)

print (rec_fun (5))
