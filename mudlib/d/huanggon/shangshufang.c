// Room: /d/huanggon/shangshufang.c

inherit ROOM;

void create()
{
	set("short", "���鷿");
	set("long", @LONG
��������һ���Ŷ������,���϶���������,Ҳ��֪�м�ǧ�����顣
��ǰһ����̴ľ����������,���������Ƕ,����̯��һ����,���׷��ŵ�
��̨��ͲҲ����̾���.���������˽���,����һ������.����������һֻ
��ͭ�Ŷ�,����̴��,���ǵ���ͷ���������³�һ¥¥���̡�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yangxindian",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/wenyoufang.c" : 1,
  __DIR__"npc/wenyoudao.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
