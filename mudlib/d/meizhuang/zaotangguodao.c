// Room: /d/suzhou/meizhuang/zaotangguodao.c

inherit ROOM;

void create()
{
	set("short", "���ù���");
	set("long", @LONG
������������������Щ����̫�塣����÷ׯ��������Ůͽ�����Ըո�
�Ͻ��˸�ΪŮ�����ṩ��ԡ�ĳ�����÷ׯׯ�漫�ϣ�ƽʱ��Ů���Ӻ�����
�棬���Բ���������������û�¾��ڴ˴�ת�ƣ���Ϊ÷ׯ�ܶ��صķ羰��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"nuzaotang",
	"west":__DIR__"nanzaotang",
  "south" : __DIR__"shibanlu2",
]));
	set("objects",([
		__DIR__"npc/wuliaodizi":2,
]));
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	if((me->query("gender")=="����"&&dir=="east")||(me->query("gender")=="Ů��"&&dir=="west"))
	return notify_fail("������������ߣ���\n");
	if(dir=="south")	return ::valid_leave(me,dir);
	if(me->query("family/family_name")!="��ɽ÷ׯ")
	return notify_fail("�����ò��Ӵ��������ɵ��ӣ�\n");
	return ::valid_leave(me,dir);
}
