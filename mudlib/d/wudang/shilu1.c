// Room: /d/wudang/shilu1.c

inherit ROOM;

void create()
{
	set("short", "ʯ·");
	set("long", @LONG
һ���ľ���ʯ��·������������ʲô�ˡ�����ͨ���䵱����������ɵ���
�ݡ����ݡ����ݸ��ȵأ������������߿ɵ��ɶ�������
LONG
	);
set("outdoors","/d/wudang");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"shilu2",
  "west" : __DIR__"shulin2",
  "southwest": __DIR__"road1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
