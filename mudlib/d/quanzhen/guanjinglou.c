// guanjinglou.c �۾�¥


inherit ROOM;

void create()
{
	set("short", "�۾�¥");
	set("long", @LONG
	������һ�������С¥���ǽ�����ׯ԰��Ե�����Ǹ�ƾ������
���ġ������῿�������ϣ������֨֨���졣�����Ѿ��ܾ�û��������
�����������￴�羰�ˡ�����(window)�ϵĴ�ֽ�Ѿ����˲��٣���һ��
�������졣
LONG
	);

	set("exits", ([
		"north" : __DIR__"houhuayuan",
	]));

	set("item_desc", ([
        "window": "�����ǻ�ɳ���죬��Զ������ʲô�����������\n"
	]) );

	setup();
	replace_program(ROOM);
}