inherit ROOM;

void create()
{
        set("short", "������");
        set("long",@LONG
����������������ߵ�һ������Լ������ߣ�����ʮ�������ഫ����
ԭ��������һ��ǰ����ɮ�������ӣ����ڵ���鳼������߱�ϵµ۴�λ��
�����´���ʱ�������Ӳ�֪�����ʧ���ˣ���Ҳ��Ϊ�������������ֵ���
�����¡��������Ҳ��֪�����Ǽ١�
LONG
        );
        set("outdoors", "tianlongsi");
        set("exits", ([
                "south" : __DIR__"baodian",
		"east" : __DIR__"wuwoge",
		"west" : __DIR__"wujingge",
                "north" : __DIR__"talin",
//		"up" :__DIR__"floor1",
        ]));
	set("objects",([
                __DIR__"npc/hutaseng1" : 1,
        ]));
//        set("no_clean_up", 0);
        setup();
//        replace_program(ROOM);
}
void init()
{
        add_action("do_jump","jump");
}
int do_jump()
{
        object me;
        me=this_player();
        if(living(me)==0)       return 0;
        if(me->query_skill("dodge",1)<10)       {
                tell_object(me,"��Ļ����Ṧ��û�����Ұɡ�\n");
                return 1;
        }
        message_vision("ֻ��$Nһ�������ذδС�������ֱ��������\n",me);
        tell_room("/d/tianlongsi/tading",me->query("name")+"������Ծ��������\n");
        me->move("/d/tianlongsi/tading");
        me->start_busy(3);
        return 1;
}
