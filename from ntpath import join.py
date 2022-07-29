from ntpath import join
import os
def read_directorty(url, directory_items, spaces):
    if len(directory_items) == 0:
        print(spaces*' ', 'nothing')
        return
    for item in directory_items:
        item_url = os.path.join(url, item)
        if os.path.isfile(item_url):
            print(spaces*' ', f'file: {item}')
        else:
            print(spaces*' ', f'directory-{item} consist:')
            read_directorty(item_url, os.listdir(item_url), spaces+2)
initial_url = os.getcwd()
initial_list = os.listdir(initial_url)
print(f'our directory consist {len(initial_list)} items:')
print(initial_list)
read_directorty(initial_url, initial_list, 2)










# pp2_url = os.getcwd()
# pp2 = os.listdir(os.getcwd())
# for item in pp2:
#     inside = os.path.join(pp2_url, item)
#     if os.path.isdir(inside):
#         print(f'directory {item} consist:', os.listdir(inside))
#     else:
#         print(inside)