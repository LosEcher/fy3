// fu-cemen ���Ҳ���


inherit ROOM;

void create()
{
	set("short", "���Ҳ���");
	set("long", @LONG
	������һ��С�ţ������������½�����������޽��ġ�����Ȼ
С���������ε���ģ����������Ƕ��������ͭ�����������ǹ���������
���űߣ�һ�������˽����͡����������ҷ͡������ž��ǳ�������Ͻ�
�ˣ����ź��Ǹ��ҵ�СԺ��
LONG
	);

	set("exits", ([
		"northwest" : __DIR__"nanjie",
		"east" : __DIR__"fu-xiaoyuan",
	]));

	set("objects", ([
		__DIR__"npc/wolfdog" : 2,
	]));

	setup();
	replace_program(ROOM);
}