// Room: /d/quanzhen/shijie7.c

inherit ROOM;

void create()
{
	set("short", "ʯ��");
	set("long", @LONG
	����һ�������ʯ��·����ɽ����������ɽ�Ƶ������������ۡ���
��ɽ�ƶ��ˣ������޽�����ʯ��ʱ�϶����˲�С�Ĺ����ߵ�����Ѿ���
�Կ���ȫ��������۵��ܽ��ˡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhen");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"shijie6",
  "northup" : __DIR__"fangzhenqiao",
]));

	setup();
	replace_program(ROOM);
}
