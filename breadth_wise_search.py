name_dict = {}

name_dict['one_a'] = ['one_a_a', 'one_a_b']
name_dict['one_b'] = ['one_b_a', 'one_b_b', 'one_b_c']
name_dict['one_c'] = ['one_c_a']


def breadth_wise_search(dict_name, target):
    all = []
    for keys in dict_name:
        all.append(keys)
    print('All list : ', all)

    for value in all:
        print('Current Value : ', value)
        if(value == target):
            print('Value Checked : ', value)
            return True, value
            
        else: 
            all.remove(value)
            print('Removed list : ', all)
            if value in dict_name:
                for vals in dict_name[value]:
                    all.append(vals)
                print('Added list : ', all)
    print(all)
    return False, 'nothing'
        
#issue with iterating a list when its being added to
answer,  a= breadth_wise_search(name_dict, 'one_b_b')
print(answer, a)

g = ['one_a_a', 'one_a_b']
