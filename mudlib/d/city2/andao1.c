
inherit ROOM;

void create()
{
	set("short", "��ػᰵ��");
	set("long", @LONG
����һ��������ĵص����������۵�ͨ��ǰ�������߶���
��ǽ����Լ������������ŵ���ص������������������ų�ʪ
��������Ϣ�����˸е�ʮ����ˬ��һ������վ�����������
������������ڡ�
LONG );
	set("exits", ([
		"enter":__DIR__"dating",
		"eastup" : __DIR__"neishi",
		"westup" : __DIR__"guancai2",
	]));
	set("objects", ([
		CLASS_D("yunlong") + "/xuanzhen" : 1
	]));
//	set("no_clean_up", 0);
	setup();
}

int valid_leave(object me, string dir)
{
	string banghui;
	object ob;

	banghui=(string)me->query("banghui");
	ob=present("xuan zhen",this_object());

	if((!banghui || banghui!="��ػ�")&&objectp(ob)&&dir=="enter")
	return notify_fail("�������һ������ס���:������ػ��ص�,��ֹ����!\n");
	return ::valid_leave(me,dir);
}
