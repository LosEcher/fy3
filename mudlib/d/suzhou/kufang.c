// Room: /d/suzhou/kufang.c

inherit ROOM;

void create()
{
	set("short", "�ⷿ");
	set("long", @LONG
���ׯ�Ŀⷿ�ڰ����Ÿ�ʽ���������������ߡ�����Ľ����־��Զ������
������֮־���˶���ҳ������˲��ٽ����еŵ��Ŀⷿ�����Ѷѵ������ġ���
�ڵƻ�ͨ����һ�������µĹܼ���æ������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"lianwuchang",
]));
	set("objects",([
		__DIR__"npc/guanjia" :1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
