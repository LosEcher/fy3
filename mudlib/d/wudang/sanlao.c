// tyroad5.c ���ɽ·
// by Marz 

inherit ROOM;

void create()
{
	set("short", "���Ϸ�");
	set("long", @LONG
	���������Ϸ��ɽ·�ϣ�һ�����ͱڣ�һ�������£��߸ߵ�������(feng)
����������Լ�ɼ������ԵĽ���ͺ����˶���ϸ�ض����Լ��Ľ��£�����̧ͷ��һ�ۣ�
Ω��һ��С��ˤ��ȥ������ǿ�˳û���٣������޲�����������ֻ�����·��
LONG
	);
	set("outdoors", "wudang");

	set("exits", ([
		"northup" : __DIR__"wulao",
		"southdown" : __DIR__"wuyalin",
	]));

	setup();
}
