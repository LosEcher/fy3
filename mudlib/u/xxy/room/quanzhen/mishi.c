// mishi.c ����


inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	������ȫ��̵���Ϊ��ֱ����ԭ�޽������ң�����Ĺ��߷ǳ�
�谵��Ҳ���Ѿ��������ˡ�
LONG
	);

	set("exits", ([
		"up" : __DIR__"diziju",
		"eastup" : "/d/city/guangchang",
	]));

	setup();
	replace_program(ROOM);
}

