// mishi.c ����


inherit ROOM;

void create()
{
	set("short","ȫ������");
	set("long", @LONG
	������ȫ��̵���Ϊ��ֱ����ԭ�޽������ң�����Ĺ��߷ǳ�
�谵��Ҳ���Ѿ��������ˡ�
LONG
	);

	set("exits", ([
		"up" : __DIR__"diziju",
"eastup":"/d/zhongzhou/shizhongxin",
	]));

	setup();
	replace_program(ROOM);
}

