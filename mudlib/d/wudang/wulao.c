// tyroad6.c ���ɽ·
// by Marz 

inherit ROOM;
//#include "feng.h"
void create()
{
	set("short", "���Ϸ�");
	set("long", @LONG
	���������Ϸ��ɽ·�ϣ�һ�����ͱڣ�һ�������¡��߸ߵ�������(feng)
�����������У���Լ�ɼ����������ԵĽ���ͺ����˶���ϸ������Լ��Ľ��£�����
̧ͷ��һ�ۣ�Ω��һ��С��ˤ��ȥ������ǿ�˳û���٣������޲�����������ֻ���
���·��
LONG
	);
	set("exits", ([
		"northup" : __DIR__"hutou",
		"southdown" : __DIR__"sanlao",
	]));

    set("objects", ([
    __DIR__"npc/ying" : 1,	
    ]));

	setup();
}

int valid_leave(object me,string dir)
{
	string fam;
	object npc;

	fam=(string)me->query("family/family_name");
	npc=present("yin litin",this_object());
	if(( !fam || fam!="�䵱��")&& dir=="northup"
	&& objectp(npc))
	return notify_fail("����ͤ�ȵ����䵱�صأ�����Ī�룡\n");
	return ::valid_leave(me,dir);
}

