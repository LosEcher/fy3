// Room: /d/suzhou/wuxue.c

inherit ROOM;

void create()
{
	set("short", "��ѩ��");
	set("long", @LONG
���ڲ��ú��ǵ��ţ�һ����֪�����Ǿ���������Ƶġ���̳�Ϲ���һ���Ż���
ֻ������һλӢ�����˵�������������ң��Զ����ü��֮��͸����������ƺ�
��̾ʱ�˲��á�̳ǰ��¯��ð���������̣����㸡����ƪ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"qongxiang",
		"south":__DIR__"ru10",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
