// Room: /d/kaifeng/wroad1.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
���⸮���������Ҫ��ͨҪ�����ֵ����ߵ������������˳�������
�̷���ߺ�ȣ�������С�����ּۻ��ۣ������ޱȡ��˵��򱱲�Զ�͵�
������۵Ĵ��š�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lisi.c" : 1,
]));
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wroad2",
  "south" : __DIR__"wroad",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
