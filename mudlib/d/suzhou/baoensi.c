// Room: /d/suzhou/baoensi.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
ӭ�����̨�Ϲ��С���ء��������֣�����Ѱ������ķ�����������¯��Ƚ
Ƚ���̲��ϡ���������������Ϊ��ĸ��������������ģ�����ͨ���¡����ָ�
��Ϊ��Ԫ������ؽ���Ÿ�Ϊ�����¡����к��ж���ѧ��Щ���գ�Ҳʱ��������
���ڵĺ��������д輼�ա�
LONG
	);
	set("objects",([
		__DIR__"obj/gongdexiang":1,
		__DIR__"npc/laofangzhang":1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"north":__DIR__"cangjingshi",
		"east" :__DIR__"chengbeijie4",
		"west" :__DIR__"baoensita",
]));
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	object *inv;
	int i;
	if(dir=="north")	{
	inv=all_inventory(me);
	if(!sizeof(inv))	return ::valid_leave(me,dir);
	for(i=0;i<sizeof(inv);i++)	{
	if(inv[i]->query_max_encumbrance())
	return notify_fail("������������֮�����Ʒ���ؾ��ң�\n���Ȱ�����"+inv[i]->query("name")+"���ߣ���\n");
	}
	return ::valid_leave(me,dir);
	}
	return ::valid_leave(me,dir);
}
