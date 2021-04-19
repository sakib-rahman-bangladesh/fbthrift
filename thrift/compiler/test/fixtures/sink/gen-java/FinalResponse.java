/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class FinalResponse implements TBase, java.io.Serializable, Cloneable, Comparable<FinalResponse> {
  private static final TStruct STRUCT_DESC = new TStruct("FinalResponse");
  private static final TField CONTENT_FIELD_DESC = new TField("content", TType.STRING, (short)1);

  public String content;
  public static final int CONTENT = 1;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(CONTENT, new FieldMetaData("content", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(FinalResponse.class, metaDataMap);
  }

  public FinalResponse() {
  }

  public FinalResponse(
      String content) {
    this();
    this.content = content;
  }

  public static class Builder {
    private String content;

    public Builder() {
    }

    public Builder setContent(final String content) {
      this.content = content;
      return this;
    }

    public FinalResponse build() {
      FinalResponse result = new FinalResponse();
      result.setContent(this.content);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public FinalResponse(FinalResponse other) {
    if (other.isSetContent()) {
      this.content = TBaseHelper.deepCopy(other.content);
    }
  }

  public FinalResponse deepCopy() {
    return new FinalResponse(this);
  }

  public String getContent() {
    return this.content;
  }

  public FinalResponse setContent(String content) {
    this.content = content;
    return this;
  }

  public void unsetContent() {
    this.content = null;
  }

  // Returns true if field content is set (has been assigned a value) and false otherwise
  public boolean isSetContent() {
    return this.content != null;
  }

  public void setContentIsSet(boolean __value) {
    if (!__value) {
      this.content = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case CONTENT:
      if (__value == null) {
        unsetContent();
      } else {
        setContent((String)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case CONTENT:
      return getContent();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof FinalResponse))
      return false;
    FinalResponse that = (FinalResponse)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetContent(), that.isSetContent(), this.content, that.content)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {content});
  }

  @Override
  public int compareTo(FinalResponse other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetContent()).compareTo(other.isSetContent());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(content, other.content);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) { 
        break;
      }
      switch (__field.id)
      {
        case CONTENT:
          if (__field.type == TType.STRING) {
            this.content = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.content != null) {
      oprot.writeFieldBegin(CONTENT_FIELD_DESC);
      oprot.writeString(this.content);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("FinalResponse");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("content");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getContent() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getContent(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

