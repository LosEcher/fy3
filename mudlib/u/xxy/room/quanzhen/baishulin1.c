// baishulin1.c ������

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	�ƹ������ȵ�ɽ�ڣ���ǰ��һƬ������֣���������ɽ�ڵ�ס����
�ߣ���ɽ�µ�ɽ·�ϸ����벻������İ�����������ô����ô�ߡ���̤����
�����У�����ȫ��ͷ������Ҷ��ס�ˣ�Խ�������������Խ���İ���
LONG
	);

	set("exits", ([
		"southdown" : __DIR__"cuipingu",
		"northup" : __DIR__"baishulin3",
		"east" : __DIR__"baishulin2",
	]));

	setup();
	replace_program(ROOM);
}