// Room: /d/suzhou/tianlongge.c

inherit ROOM;
void create()
{
	set("short", "������");
	set("long", @LONG
���Դ��ŵ��Ǹ���ܣ�������Ų����鼮�����������Ǽ��Ű������ߵ�ľ����
����Сѧͯ��ҡͷ���Եĸ������һλ���������ֳֽ�߱�Ŀ���񣬺������С�
��˵��λ�������Բ���֮���Ļ��������ڼ��н�����ա�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengnanjie2",
]));
	set("objects",([
//                __DIR__"obj/shujia" :1,
		__DIR__"npc/laoxiucai" :1,
]));
	set("no_clean_up", 0);

	setup();
}
