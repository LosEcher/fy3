//Mr.music yangzhou ����

inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
	����������ݸ��ã����ſ���һ�������ʯʨ�����ɫ�Ĵ��Ž���
�ţ�ֻ���ſ���������һ���������׻�˵���������ų�Ǯ����������ǳ���
��������Ǯׯ�ˡ�

LONG
        );

        set("exits", ([ 
                      "south" : __DIR__"datang",
                      "north" : __DIR__"dongguan1",
                     ]));
        set("objects", ([
                __DIR__"npc/bingyong": 2
        ]) );

        setup();
}

int valid_leave(object me, string dir)
{
        if( dir=="north"  )
        {
        tell_object(me,"[36m������ſڵ�ʯʨ���ڱ��������һ��,������һ�Ų��ˤ����[37m \n");
        if (me->query("sen")>10) me->add("sen",-10);
        return 1;
        }
        if(dir=="south")
        {
         if ( me->query_skill("literate",1) < 20 )
           {
            tell_object(me,"������ס��˵��֪������������������Ұ��.\n");
            say("������ס��"+me->query("name")+".\n");
            return notify_fail("������ס����.\n");
           } 
           tell_object(me,"���¸�����������֮��һ����������.\n");
           return 1;
        }
}



