// Room: /d/hangzhou/leifeng.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "�׷�Ϧ��");
	set("long", @LONG
������ľʯΪ���ģ��⽨ľ��¥�ȵĸ��������׷�����.������ 
��,�ڱ�Ƕ�п��š����Ͼ�����ʯ�����¹����ͭʮ���޺���Ϧ�� 
���գ���Ӱ��գ�̨ͤ��̣��ʵá��׷�Ϧ�ա�֮�� 
LONG
	);
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"shilu.c",
  "in" : __DIR__"tanei.c",
]));

	setup();
	replace_program(ROOM);
}
