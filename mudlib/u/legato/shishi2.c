#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "ɽ��");
        set("long", @LONG
������һ�������ɽ��,��������͸����������,�㷢��
��ɽ����������һ��ʯ����������һ������,�����õ�
�Ա���һ������,ǽ�߷���һ�ѳ�ͷ,Ҳ��֪����ʲô�á�
 

LONG
        );
        set("exits", ([ /* sizeof() == 1 */
                "out" : "/d/yandang/shanlu",
]));
        setup();
       set("item_desc", (  [
      "����": "��ԶԶ���������ã�������������Ѿ���ȥ�ܾ��ˣ��ܿ��������ӡ�\n",
      "ʯ��": "��ʯ����ֻ��һ������.",
      "��ͷ": "��ѳ�ͷ�����ڿ������á�",
        ]) );

}
void init()
{
        add_action("do_mai", "mai");
        add_action("do_pick","pick");
        add_action("do_look","look");
        
}

int do_mai(string arg)
{
        object  me, lu;

        if( arg != "����") 
                return notify_fail("��Ҫ��ʲô��\n");
        me = this_player();
        if(me->query_temp("marks/mai"))

  return notify_fail("������ô��ʬ��������\n");
 

        me->set_temp("marks/mai", 1);
        message_vision("\n$N�ڵ������˸��ӣ�����������������\n", me);
        return 1;
}



int do_look(string arg)
{
        object  me, lu;

        if( arg != "ʯ��") 
                return notify_fail("��Ҫ3��ʲô��\n");
        me = this_player();
        if(!me->query_temp("marks/mai"))

  return notify_fail("������һ�����á�\n");
 

        message_vision("\n$N������ʯ������һ�����������ϵ����������顣\n", me);
        return 1;
}

int do_pick(string arg)
{
       object me,lu;
         me = this_player();

       if(arg != "����")
                 return notify_fail("��Ҫ��ʲô�� \n");
         if(!me->query_temp("marks/mai"))
return 0;


         if(me->query_temp("marks/pili_book"))
       return 0;
        lu = new(__DIR__"obj/pili_book");
        lu->move(me);
       me->set_temp("marks/pili_book", 1);
        message_vision("\n$NС������ĴӴ��ϼ���һ�����顣\n", me);
        return 1;
}


