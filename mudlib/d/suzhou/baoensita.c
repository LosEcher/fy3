// Room: /d/suzhou/baoensita.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
���������ֳƱ����������н��ϵ�һ��֮�ƣ������Ļ�����ңң��ԣ���
��Ϊ���ݹųǵı�־��������Լ��ʮ�ף�����������֮�ڡ����������ܸ�����
�ɣ��˵������ڽ��ϡ���ʫ���С�����֧���£������л���֮˵����̧ͷ������
������̾���ѡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"baoensi",
]));
	set("objects",([
	__DIR__"npc/xiaoshami" :1,
	__DIR__"npc/xiaoheshang" :1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
