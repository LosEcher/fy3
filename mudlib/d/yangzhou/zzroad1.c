// Room: /u/swordman/yangzhou/zzroad1.c

inherit ROOM;

void create()
{
	set("short", "���ݴ��");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵ� 
���̣����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡� 
��ʱ����������������߷ɳ۶���������һ·���������ϵ��� 
�������ž�װ���¼��������еĻ���������ŵ�������������Щ 
Щϰ��Ľ����ˡ���·��������������������֡� 
LONG
	);
	set("light_up", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"zzroad",
  "southeast" : __DIR__"zzroad2",
]));
	set("outdoors", "/u/swordman");

	setup();
	replace_program(ROOM);
}
