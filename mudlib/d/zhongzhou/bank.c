//bank
  

inherit ROOM;

void create()
{
	set("short", "Ǯׯ");
	set("long", @LONG
������һ��Ǯׯ����˵����������ܺá���������ڹ�̨��æ�š���
̨�ϻ���һ������(paizi)�����Ǹ�Ǯ��Ӫ��������ı������ֲ�������
��򲻵�ʲô�����⡣
LONG
	);

	set("exits", ([
		"east" : __DIR__"wendingnan1",
		 
	]));
set("no_fight",1);
set("item_desc",([
"paizi":"��Ǯ:cun  ����:check    ȡǮ:qu ��:huan \n",
"paizi":"��Ǯ:cun  ����:check    ȡǮ:qu ��:huan \n",
]));
		set("objects" , ([
		__DIR__"npc/yaodezhong":1,
	]));

	setup();
	replace_program(ROOM);
}

