def format_string(s):
    size= len(s.strip('\n').split('\n'))
    return f"char grid [{size}][{size}] = " + "{" + ' '.join(["{"+' '.join([f"'{c}'," for c in l.strip(" ").split(" ")])[:-1]+"},\n" for l in s.strip('\n').split("\n")]) + "};"

# s = """R X R X R
# X A A A X
# R A C A R
# X A A A X
# R X R X R 
# """

# s = """B Q I F J Q K Y T S D W Q S L G U C X A U B D
# E E X C A O B C D E E U O K H G R K J Q A G P
# N D N A I K O L U L A A N U K A Y T U R L P I
# X N J M N E T R A I L U Q E T U K H B G F E I
# S Y N A A G U L Q J H F C Y T S M A S R A H N
# B C A O B C D E E O P Y M N Q S T U V O C O U
# I G Y Z H M A W U K N G B Y I P U A S H H U I
# L R B A R A A Q F J K X Y Q V N R T Y I F R Z
# R I B V J K M P Y Z S I F U X C A B Q N P A H
# C H G N Z X U Z J O N A T H A N Z W R A M J B
# T P K L L K G R Z E R K L N H E Z S S W B E Z
# K X L G U U V G W J J S Q K H J Z T I A T H J
# Q R H O Q G N N Q Z R D U O J Y Y B A K D N O
# A A E C A W U S W O C U Z M Y K U X T E A L V
# G R T N T Y M R P B L F D T A C S F L L K U D
# B R A L W W N X A E F Q G H K B H X C U P J H
# Z V A N K D H R M O H Y O A V Z A D S P Z R S
# I K N B U A O O Z D S M T Y H L N Z L D W M E
# P E S J L F R D S T A X X C M A K H D E G V M
# D C L E O Z W H I K O O A U I J U R X I T F O
# C U G B I O J E R A I D A F Z I Y U S H L J S
# B N H C C G T B B T N T I N T H C X K D D N Y
# A Y O O N J A E Z Z O K J V K G D A F C V R D
# """

s = """S Q I F J Q K Y T S D W Q S L G U C X A U B D
W A X C A O M I G U E L O K H G R K J Q A G P
Z D L A I K O L U Q S F D V N S A L O H C I N
X N J M N E T R A I L U Q E T U K H B G F E I
S A H I L G U L Q J H F C Y T S M A S H A H W
B C A O B I D E E O P Y M N Q S T U V Z C O R
I G Y Z H M S W U K N G B Y I P U A S R H U I
L R F K Q Y U A F J K X Y Q V N R T Y O F R Z
R I B V J K M P Y Z S I F U X C A B Q W P A H
C H G N Z X U Z J O N A T H A N Z W R A M J B
T P K L L K G R Z K R K L N H E Z S S N B E S
K X L G U U V G A J J S Q K H J Z T I V T H H
Q R B R I A N F Q Z R D U O J Y Y B A W D N L
A A N C A W U S W O C U Z M Y K U X T N A L O
G R G K T I M R P B K F D T A C S F L L K U K
B R U L W W N X A F F Q G H K M H X C U P J J
Z B T N K D H K T O H Y O A V A A D S P Z R W
J K Z B U T O E Z D S M T Y H I N Z L D W M A
P E S J E V E L Y N A X X C M R K H D E G V I
D C L I O Z W L I K O O A U I A U R X I T F O
C U N B I O J Y B E T H E L Z M Y U S H L J T
B N H C C G T B B T N T I N T H C X K D D N Y
A M R O S E D V Z Z O K J V K G D A F C V R D
"""

print(format_string(s))