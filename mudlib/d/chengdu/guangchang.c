//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "�츮�㳡");
        set("long", @LONG
�����ǳɶ������ģ�ռ��Լ��Ķ����ɫ�Ĳ�ƺ����һ���
�ĵ�̺����������һ���������������ϰ����ˣ��������ǣ���
֪���ɶ�����ʷ���൱�ƾõġ������������˺ܶ࣬����������
Ħ����࣬���ο͡������ˡ����ˡ�С�������ˣ����ֺ�ߺ��
�������ڶ�����һ�����ַ����ľ���
LONG
        );

        set("exits", ([
                "north" : __DIR__"beijie2",
                "south" : __DIR__"nanjie1",
                "west" : __DIR__"xijie2",
                "east" : __DIR__"dongjie1",                
        ]));
        set("outdoors","chengdu");
        set("objects",([
                  __DIR__"npc/xiaolanyan" : 3,
                  __DIR__"npc/laolanyan" : 1,
           ]));
      
        setup();
        replace_program(ROOM);
}

 
