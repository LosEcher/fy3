// Room: /d/suzhou/canhe/qianting.c

inherit ROOM;

void create()
{
	set("short", "ǰ��");
	set("long", @LONG
���ڲ��ü򵥵������������ţ���������������Щ�ر��ļҾ�֮����������
���������κζ�������һ�߽�����;������ʵ�ڰ�������Щ���ݣ��̲�ס��
���м�����
LONG
	);
	set("objects",([
		__DIR__"npc/dengbai":1,
		__DIR__"npc/gongye" :1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"canhe",
		"east" :__DIR__"dating",
]));
	set("item_desc",([
		"����" : "��������(zhuozi)�ƺ�ûʲô�ر�֮����\n",
		"zhuozi":"���������ƺ�ûʲô�ر�֮����\n",
		"����" : "��������(yizi)�ƺ�ûʲô�ر�֮����\n",
		"yizi" : "���������ƺ�ûʲô�ر�֮����\n",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
