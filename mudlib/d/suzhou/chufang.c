// Room: /d/suzhou/chufang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���ڴ��������������ڣ�һ����������������������̨��֧��ʮ���ڴ����
��ð�Źɹ���������ʦ����Ҳ��æ���ģ�������û��ע�⵽���˽�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east" :__DIR__"lianwuchang",
]));
	set("objects",([
		__DIR__"npc/dashifu": 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
