// Room: /d/suzhou/neishi.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���ڰ������Ǿ��ɣ���Ȼ���ǰ�ׯ���ϴ���Ϊ����������㰸�Ϲ����Ű���
���ף���¯��ð���ɹ����̡����״����鰸�Զ�����һλ��С�ɰ���С�����
���ź����Ĵ��۾�һգ��գ�Ŀ����㡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"lianwuchang",
]));
	set("objects",([
	__DIR__"obj/shugui":1,
		__DIR__"npc/baobuliang":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
