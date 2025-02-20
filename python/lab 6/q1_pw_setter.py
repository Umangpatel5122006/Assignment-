class Password_manager:
    def __init__(self,pw_list):
        self.pw_list=pw_list
        self.l=len(pw_list)
        self.c_pw=pw_list[(self.l)-1]
    def get_password(self):
        return self.c_pw
    def set_password(self,new_pw):
        self.new_pw=new_pw
        flag=0
        for i in range(0,self.l):
            if(new_pw==self.pw_list[i]):
                flag=1
                print("Password already exist")
                break
        if(flag==0):
            self.c_pw=self.new_pw
    def is_correct(self,attemp):
        if(attemp==self.c_pw):
            return True
        else:
            return False
pass_list=Password_manager(["umang","5122006","umang123"])
print("current password",pass_list.get_password())
print("Attemped password is : ump14563 ")
pass_list.set_password("ump14563")
print(pass_list.is_correct("umang123"))
                            