// Room: /d/suzhou/shelita.c

inherit ROOM;

void create()
{
	set("short" ,"������");
	set("long", @LONG
�������˽��߲�¥��ʽ��ľ�ṹ��ש������Լ��ʮ���ס���̧��ͷ����ע��
����ɲ��Ϊ���ƣ�ͦ���������治֪��������������ġ�ֻ��������߻�ǽ����
ɫ�����ӳ��Ȥ������������������
LONG
	);
	set("objects",([
		__DIR__"npc/hutaseng" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"shuangta",
		"east" :__DIR__"shelita",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
void init()
{
	add_action("do_jump","jump");
}
int do_jump()
{
	object me;
	me=this_player();
	if(living(me)==0)	return 0;
	if(me->query_skill("dodge",1)<10)	{
		tell_object(me,"��Ļ����Ṧ��û�����Ұɡ�\n");
		return 1;
	}
	message_vision("ֻ��$Nһ�������ذδС�������ֱ��������\n",me);
	tell_room("/d/suzhou/gongdetading",me->query("name")+"������Ծ��������\n");
	me->move("/d/suzhou/gongdetading");
	me->start_busy(3);
	return 1;
}
