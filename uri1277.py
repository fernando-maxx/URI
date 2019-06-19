def main(args):
	return 0
	
if __name__ == 	'__main__':
	import sys

#sys.stdin = open('in', 'r')
n = int(raw_input())

for i in range(0, n):
	count = []
	c = ''
	flag = 1;
	x = int(raw_input())
	
	name = raw_input()
	text_format = name.split(" ")
	list_name = [string for string in text_format]
	
	fauls = raw_input()
	text_format = fauls.split(" ")
	list_faul = [string for string in text_format]
	
	for j in range(0, x):
		 p = list_faul[j].count('P')
		 a = list_faul[j].count('A')
		 if a+p > 0:
			 if p/float(a+p) < 0.75:
				 if flag:
					c += list_name[j]
					flag = 0
				 else:
					c += ' ' + list_name[j]
	
	print c
				
		
sys.exit(main(sys.argv))
