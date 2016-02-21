// Room: /d/hangzhou/lu3.c

inherit ROOM;

void create()
{
	set("short", "��·��");
	set("long", @LONG
�������·�������պ�Ҫ����·�߳�������ͷˮţ�����������
������ͯ���ڳر���Ц��·�ϲ�ʱ�п����۶�����ʱ�����ε�Сϱ��
����Сë¿���Ƶ��߹�����������ɽˮ����������ɽ��ˮ��ĺ��ݣ���
�ߵĴ��ֱͨ���ݣ����Ͽɵ��ɶ�������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhiluren.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"lu2",
  "southup" : __DIR__"lu4.c",
  "north" : "/d/suzhou/dadao3",
]));

	setup();
	replace_program(ROOM);
}
