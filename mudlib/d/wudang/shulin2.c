// Room: /d/wudang/shulin2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������ľ����ʮ�ָߴ�������ա����������ܸ���������������Ȼ��
���䵱ɽ�����������������ʮ�����š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shilu1",
  "west" : __DIR__"shulin1",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
