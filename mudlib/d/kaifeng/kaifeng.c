// Room: /d/kaifeng/kaifeng.c

inherit ROOM;

void create()
{
	set("short", "���⸮");
	set("long", @LONG
���⸮ͳ�ܿ�����Ƭ�������εĿ��⸮������������������˽��
�������������������Σ�����Ϊ�����졣����һ��һ���ߴ�Ĺļ�
��״��ԩ�Ŀ����ڴ��ùġ�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhaohu.c" : 1,
  __DIR__"npc/zhanglong.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"jiedao1",
  "west" : __DIR__"datang",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
