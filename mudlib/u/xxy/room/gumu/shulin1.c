// shulin1.c ����
// By Lgg,1998.9

inherit ROOM;

void create()
{
	set("short", "С����");
	set("long", @LONG
	����һƬС���֣���Χ����ľ���ܸߡ�������һЩ�в������ֵ�
�ʻ�������ͷס�����������Щ����������������·�˰ɣ�תͷ��ȴ����
���ϱ��ƺ���һ��С·������������֮�С�
LONG
	);

	set("exits", ([
		"southwest" : __DIR__"shulin2",
		"northeast" : "/d/quanzhen/shanlu4",
	]));
	
	setup();
	replace_program(ROOM);
}
