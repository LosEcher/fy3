// Room: /d/suzhou/gongdeta.c

inherit ROOM;

void create()
{
	set("short","������");
	set("long", @LONG
�����빦�����������ţ���ģ����ʽ��ȫ��ͬ��������ש�����������㣬
ƽש�����������䡣���ܻ������ԣ��������̡����������ƽ����������ש��
�����ɡ��������ͬľ�������������������ǽ���һ�����͵������������㲻��
��̧ͷ���˿���������ɲ��
LONG
	);
	set("item_desc",([
		"��ɲ"  :"���������ô��ȥ�أ�\n",
		"tiesha":"���������ô��ȥ�أ�\n",
	]));
	set("objects" ,([
		__DIR__"npc/hutaseng" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"gongdeta",
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
		tell_room("/d/suzhou/shelitading",me->query("name")+"������Ծ��������\n
");
		me->move("/d/suzhou/shelitading");
	me->start_busy(3);
        return 1;
}
