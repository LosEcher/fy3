// houhuayuan.c ��԰

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
	������һ��С��԰�����ҵ����Ÿ��ֻ��ݣ��������˴�����
���Ѿ����úܸ��ˡ���һЩ��ģ��׵��ʻ������ڲݴ��У������㲻
�ϵ�Ʈ����������һ��С�ţ�������һ������С¥��
LONG
	);

	set("exits", ([
		"south" : __DIR__"guanjinglou",
		"west" : __DIR__"fu-houyuan",
		"east" : __DIR__"houhuayuan1",
	]));

	setup();
	replace_program(ROOM);
}