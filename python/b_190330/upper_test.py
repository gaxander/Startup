#!/usr/bin/python

current_users = ['abc','EDF','Hij','jkl']
new_users = ['abc','rane','hij','ree']

def C_U(c_u):
    for item in c_u:
        yield item.lower()

for user in new_users:
    user_t = user.lower()
    if user_t in C_U(current_users): 
        print('already exist')
    else:
        print('unused')
