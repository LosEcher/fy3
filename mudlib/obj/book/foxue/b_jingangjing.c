// 

inherit ITEM;

void create()
{
        set_name("����վ���", ({"jingangjing", "jing" }));
        set_weight(100);
        set("unit", "��");
        set("long",
                
                "��˷�ѧ���䣬һ��Ҫ��(read)һ��.\n"
             );
        set("value", 3000);
        set("skill", ([
                "name": "foxuexinde",
                "age" : 16,         
                "max_skill":    60 
        ]) );
}
 
void init()
{
	add_action("do_read", "read");
}


int do_read(string arg)
{
object me;
if( !id(arg) ) return 0;
me=this_player();
switch(3)
 {
  case 0: tell_object(me,"�������Ӧ����ס�������ġ���ͻȻ�е�д���\n");
          break;
  case 1: tell_object(me,"��������������������������ͻȻһ��ʧ�䡣\n");          
          break;
  case 2: tell_object(me,"���������ȥ�Ĳ��ɵá��������������е�����\n");
          if( me->query("bellicosity") >0 )   
           {
            me->add("bellicosity", (-1)* random(10) );
            tell_object(me,"��ͻȻ�з����������سɷ����ͷ��\n");
           }

          break;
 }
	return 1;
}
