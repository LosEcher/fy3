// liangong.c ������
// By Lgg,1998.9

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	����ʯ����״�������أ�ǰխ�����Ϊ���Σ����߰�Բ������
ȴ��������״��ԭ��������ǰ������ʦ�������ң�ǰխ���ƣ����ʹȭ��
��Բ�н������Ƿ��ڡ�
LONG
	);

	set("exits", ([
		"east" : __DIR__"zhengting",
		"north" : __DIR__"xiuxishi",
	]));

	setup();
	replace_program(ROOM);
}