//Mr.music yangzhou ��վ

inherit ROOM;

void create()
{
	set("short", "��վ");
	set("long", @LONG
	���������ݳ�Ψһ��һ����վ--������վ�����δ��ʧ�κ�
�ż��ͻ�����Ҵ��ݼ�ʱ�����������һֱ�ܺá����ͻ���ͨ������
����Щ���ã������ż�����Ϊ�ǽַ��ھӻ��Լ��ˣ�ͨ������������
�����κη��á�

LONG
	);

	set("exits", ([ 
		      "north" : __DIR__"jiedao3",
	             ]));
	set("objects", ([
		__DIR__"npc/youchai": 1 ,
                __DIR__"npc/gou": 1
	]) );

	setup();
}

int valid_leave(object me, string dir)
{
	object mbox;

	if( mbox = me->query_temp("mbox_ob") ) {
		tell_object(me, "��ź����䣬���ʲ��ʾ��л��\n");
		destruct(mbox);
	}
	return 1;
}
