// yuzhengong.c ���湬


inherit ROOM;

void create()
{
	set("short", "���湬");
	set("long", @LONG
	��������������ǰ�ľ�ַ���������������˲�����֮ǰ���޵ĵ�
���������ִ�ȫ��̺󣬴˵صĲ���ʵ��̫С���ͽ�������Ǩ������ɽ�ϣ�
���˵����¸���Ϊ���湬���Լ���õ�֮�⡣����ܾ�û���������ˣ�����
�϶������˻ҳ���
LONG
	);

	set("exits", ([
		"south" : __DIR__"fangzhenqiao",
	]));

	setup();
	replace_program(ROOM);
}