// give.c

inherit F_CLEAN_UP;

int do_give(object me, object obj, object who);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
	string target, item;
	object obj, who, *inv, obj2;
	int i, amount;
	mixed no_give;

      if(this_player()->is_busy())
      return notify_fail("����æ���أ�����\n");
      
	if(!arg) return notify_fail("��Ҫ��˭ʲ�ᶫ����\n");

	if( sscanf(arg, "%s to %s", item, target)==2
	|| sscanf(arg, "%s %s", target, item)==2 );
	else return notify_fail("��Ҫ��˭ʲ�ᶫ����\n");
	
       who = LOGIN_D->find_body(target);
       if(wizardp(me) && who && !wizardp(who))
              return notify_fail("�㲻�ܸ�����κζ�����\n");

	if(!objectp(who = present(target, environment(me))) || !living(who))
		return notify_fail("����û������ˡ�\n");
	
	if( me == who )  {
                  write("Ok.\n");
                  return 1;
         }
       if(who->query_temp("block_msg/all"))
                 return notify_fail(who->name()+"���ڲ��ܽ�������Ķ�����\n");
   
	if( who->query("env/no_accept")&& wiz_level(me)<=wiz_level(who))
		return notify_fail("�����ӣ�"+who->query("name")+"�����������Ķ�����\n");

       
	if(sscanf(item, "%d %s", amount, item)==2) {
		if( !objectp(obj = present(item, me)) )	
			return notify_fail("������û������������\n");
		if( obj->query("no_drop") )
			return notify_fail("�����������������ˡ�\n");
		if( !obj->query_amount() )	
			return notify_fail( obj->name() + "���ܱ��ֿ����ˡ�\n");
		if( amount < 1 )
			return notify_fail("����������������һ����\n");
		if( amount > obj->query_amount() ) 
			return notify_fail("��û��������" + obj->name() + "��\n");
		else if( amount == (int)obj->query_amount() )
			return do_give(me, obj, who);
		else {
			obj->set_amount( (int)obj->query_amount() - amount );
			obj2 = new(base_name(obj));
			obj2->set_amount(amount);
			return do_give(me, obj2, who);
		}
	}

	if(arg=="all") {
		inv = all_inventory(me);
		for(i=0; i<sizeof(inv); i++) {
			do_give(me, inv[i], who);
		}
		write("Ok.\n");
		return 1;
	}

	if(!objectp(obj = present(item, me)))
		return notify_fail("������û������������\n");
		
	if( no_give=obj->query("no_give") )
return notify_fail( stringp(no_give) ? no_give : "���������������ⶪ����\n");
return do_give(me,obj,who);
}

int do_give(object me, object obj, object who)
{
	mixed no_give;
	
	if(me->is_busy())
      return notify_fail("����æ���أ�����\n");
      if(who->is_busy())
      return notify_fail("�Է���æ���أ�ûʱ�����㣮����\n");
      if(who->query("env/no_accept"))
           return notify_fail("�Է�����Ը��������Ķ�����\n");
      if( obj->query("no_drop") )
		return notify_fail("�����������������ˡ�\n");
	if(no_give=obj->query("no_give") )
     return notify_fail( stringp(no_give) ? no_give : "���������������ⶪ����\n");
     

//if( !interactive(who) && !who->accept_object(me, obj) )
// if (!who->accept_object(me,obj))
 if (!userp(who)&&!who->accept_object(me,obj)) //china
		return notify_fail("��ֻ�ܰѶ����͸�������Ҳ��ݵ����\n");

//	if( !userp(who) && obj->value())        {
	if( !userp(who) && !obj->is_character())	{
		message_vision("$N�ó�" + obj->short() + "��$n��\n", me, who);
		destruct(obj);
		return 1;
	} else if( obj->move(who) ) {
		printf("���%sһ%s%s��\n", who->name(), obj->query("unit"),
			obj->name());
		message("vision", sprintf("%s����һ%s%s��\n", me->name(),
			obj->query("unit"), obj->name()), who );
		message("vision", sprintf("%s��%sһ%s%s��\n", me->name(), who->name(),
			obj->query("unit"), obj->name()), environment(me), ({me, who}) );
		return 1;
	}
	else return 0;
}
int help(object me)
{
write(@HELP
ָ���ʽ : give <��Ʒ����> to <ĳ��>
      �� : give <ĳ��> <��Ʒ����>
 
���ָ��������㽫ĳ����Ʒ������, ��Ȼ, ������Ҫӵ��������Ʒ.
 
HELP
    );
    return 1;
}
