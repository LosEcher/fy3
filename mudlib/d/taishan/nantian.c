// Room: /d/taishan/.c
// Date: CSWORD 96/03/25

#include <ansi.h>

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������ʮ���̣��������̩ɽ������ڴ��������︽��ɽ�£�
Ⱥɽ�����أ����������ƣ���ؿ������޿���״������������
���߿ɵ�һ���м��������߱����¹۷壬���������ǵ���ʶ�֮·��
LONG );
	set("exits", ([
		"eastup" : __DIR__"tianjie",
		"northup" : __DIR__"yuhuang",
		"west" : __DIR__"yueguan",
		"southdown" : __DIR__"shengxian",
	]));
	set("objects",([
//		__DIR__"npc/jiang" : 1,
//		__DIR__"npc/wei-shi3" : 2,
		__DIR__"npc/jianchu":1,
	]));
//	set("no_clean_up", 0);
	set("outdoors", "taishan");
	setup();
}

int valid_leave(object me, string dir)
{
	string fam;
	object ob;

	fam=(string)me->query("family/family_name");
	ob=present("jianchu daoren",this_object());
	if(fam && fam!="̩ɽ��" && (int)me->query("combat_exp")>10000
	&& objectp(ob) && dir=="northup")
	return notify_fail("�������˺ȵ�����������û�ռ��㣡\n");
	return ::valid_leave(me,dir);
}
