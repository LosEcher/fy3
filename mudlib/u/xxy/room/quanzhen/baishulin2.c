// baishulin2.c ������


inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	���߽��˰����ֵ�������²��ź�����Ҷ���������������
���߷ǳ��������㼸��ʲô���������ˡ�ͻȻһֻ���������ǰ����֦����
�����˹�ȥ��������һ����
LONG
	);

	set("exits", ([
		"northup" : __DIR__"baishulin4",
		"west" : __DIR__"baishulin1",
	]));

	setup();
	replace_program(ROOM);
}