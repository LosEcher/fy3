// Room: /d/suzhou/meizhuang/caofang.c

inherit ROOM;

void create()
{
	set("short", "��ͤ");
	set("long", @LONG
һ��С��ͤ����Ȼ��ª�����ܵķ羰ȴʮ�����ˡ�ׯ����ʱ���ڴ���
��̸�졣��ͤ�����ʯ�����б���ׯ�����ֱ��Ƶġ�÷��¼�����Թ���ׯ
������ʫ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"heilang1",
]));
	set("valid_startroom",1);
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	call_other("/obj/board/meizhuangboard","???");
	replace_program(ROOM);
}
