// Room: /d/hengshan/cuipinggu2.c
// Date: CSWORD 96/03/25

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����Ͽ�����ʯ�ڶ�ֱ�����±�����һ�����������������
���յĺ�ɽɽ���У�ȴ����ʮ���������ڴ���ɽ������������Σ�ң�
������ȣ��������£���������¥�Կ���ȽȽ���䡣�Ǿ���������
�ˡ�
LONG
	);
	set("exits", ([
		"up"         : __DIR__"cuiping1",
		"northeast" : __DIR__"cuipinggu1",
	]));
	set("objects",([
		__DIR__"npc/zhi":1,
	]));

	set("outdoors", "hengshan");
        set("no_clean_up", 0);
	setup();
}
int valid_leave(object me,string dir)
{
	string family;
	object ob;

	family=(string)me->query("family/family_name");
	ob=present("yi zhi",this_object());
	if( family && family!="��ɽ��" && objectp(ob) && dir=="up")
	return notify_fail("�������һ������ɽ���أ�"+RANK_D->query_respect(me)
        +"ĪҪ�����롣\n");
	return ::valid_leave(me,dir);
}

